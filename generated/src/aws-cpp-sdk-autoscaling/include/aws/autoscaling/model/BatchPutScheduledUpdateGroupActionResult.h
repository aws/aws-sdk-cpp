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
  class BatchPutScheduledUpdateGroupActionResult
  {
  public:
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult();
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& GetFailedScheduledUpdateGroupActions() const{ return m_failedScheduledUpdateGroupActions; }

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline void SetFailedScheduledUpdateGroupActions(const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& value) { m_failedScheduledUpdateGroupActions = value; }

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline void SetFailedScheduledUpdateGroupActions(Aws::Vector<FailedScheduledUpdateGroupActionRequest>&& value) { m_failedScheduledUpdateGroupActions = std::move(value); }

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline BatchPutScheduledUpdateGroupActionResult& WithFailedScheduledUpdateGroupActions(const Aws::Vector<FailedScheduledUpdateGroupActionRequest>& value) { SetFailedScheduledUpdateGroupActions(value); return *this;}

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline BatchPutScheduledUpdateGroupActionResult& WithFailedScheduledUpdateGroupActions(Aws::Vector<FailedScheduledUpdateGroupActionRequest>&& value) { SetFailedScheduledUpdateGroupActions(std::move(value)); return *this;}

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline BatchPutScheduledUpdateGroupActionResult& AddFailedScheduledUpdateGroupActions(const FailedScheduledUpdateGroupActionRequest& value) { m_failedScheduledUpdateGroupActions.push_back(value); return *this; }

    /**
     * <p>The names of the scheduled actions that could not be created or updated,
     * including an error message.</p>
     */
    inline BatchPutScheduledUpdateGroupActionResult& AddFailedScheduledUpdateGroupActions(FailedScheduledUpdateGroupActionRequest&& value) { m_failedScheduledUpdateGroupActions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline BatchPutScheduledUpdateGroupActionResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline BatchPutScheduledUpdateGroupActionResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<FailedScheduledUpdateGroupActionRequest> m_failedScheduledUpdateGroupActions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
