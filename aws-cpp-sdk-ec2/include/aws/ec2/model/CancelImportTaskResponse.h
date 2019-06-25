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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
namespace EC2
{
namespace Model
{
  class AWS_EC2_API CancelImportTaskResponse
  {
  public:
    CancelImportTaskResponse();
    CancelImportTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CancelImportTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline const Aws::String& GetImportTaskId() const{ return m_importTaskId; }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetImportTaskId(const Aws::String& value) { m_importTaskId = value; }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetImportTaskId(Aws::String&& value) { m_importTaskId = std::move(value); }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetImportTaskId(const char* value) { m_importTaskId.assign(value); }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithImportTaskId(const Aws::String& value) { SetImportTaskId(value); return *this;}

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithImportTaskId(Aws::String&& value) { SetImportTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithImportTaskId(const char* value) { SetImportTaskId(value); return *this;}


    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetPreviousState() const{ return m_previousState; }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetPreviousState(const Aws::String& value) { m_previousState = value; }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetPreviousState(Aws::String&& value) { m_previousState = std::move(value); }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetPreviousState(const char* value) { m_previousState.assign(value); }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithPreviousState(const Aws::String& value) { SetPreviousState(value); return *this;}

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithPreviousState(Aws::String&& value) { SetPreviousState(std::move(value)); return *this;}

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithPreviousState(const char* value) { SetPreviousState(value); return *this;}


    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The current state of the task being canceled.</p>
     */
    inline CancelImportTaskResponse& WithState(const char* value) { SetState(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CancelImportTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CancelImportTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_importTaskId;

    Aws::String m_previousState;

    Aws::String m_state;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
