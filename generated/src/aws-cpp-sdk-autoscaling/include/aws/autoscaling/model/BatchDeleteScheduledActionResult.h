/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/ResponseMetadata.h>
#include <aws/autoscaling/model/FailedScheduledUpdateGroupActionRequest.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  class BatchDeleteScheduledActionResult
  {
  public:
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult();
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API BatchDeleteScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& GetFailedScheduledActions() const{ return m_failedScheduledActions; }

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline void SetFailedScheduledActions(const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& value) { m_failedScheduledActions = value; }

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline void SetFailedScheduledActions(Aws::Vector<FailedScheduledUpdateGroupActionRequest>&& value) { m_failedScheduledActions = std::move(value); }

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline BatchDeleteScheduledActionResult& WithFailedScheduledActions(const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& value) { SetFailedScheduledActions(value); return *this;}

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline BatchDeleteScheduledActionResult& WithFailedScheduledActions(Aws::Vector<FailedScheduledUpdateGroupActionRequest>&& value) { SetFailedScheduledActions(std::move(value)); return *this;}

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline BatchDeleteScheduledActionResult& AddFailedScheduledActions(const FailedScheduledUpdateGroupActionRequest& value) { m_failedScheduledActions.push_back(value); return *this; }

    /**
     * <p>The names of the scheduled actions that could not be deleted, including an
     * error message.</p>
     */
    inline BatchDeleteScheduledActionResult& AddFailedScheduledActions(FailedScheduledUpdateGroupActionRequest&& value) { m_failedScheduledActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchDeleteScheduledActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchDeleteScheduledActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<FailedScheduledUpdateGroupActionRequest> m_failedScheduledActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
