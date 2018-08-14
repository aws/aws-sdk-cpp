/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_AUTOSCALING_API BatchPutScheduledUpdateGroupActionResult
  {
  public:
    BatchPutScheduledUpdateGroupActionResult();
    BatchPutScheduledUpdateGroupActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    BatchPutScheduledUpdateGroupActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
