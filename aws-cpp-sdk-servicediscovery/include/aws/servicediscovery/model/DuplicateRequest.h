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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>The operation is already in progress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DuplicateRequest">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API DuplicateRequest
  {
  public:
    DuplicateRequest();
    DuplicateRequest(Aws::Utils::Json::JsonView jsonValue);
    DuplicateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline DuplicateRequest& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline DuplicateRequest& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline DuplicateRequest& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline const Aws::String& GetDuplicateOperationId() const{ return m_duplicateOperationId; }

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline bool DuplicateOperationIdHasBeenSet() const { return m_duplicateOperationIdHasBeenSet; }

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline void SetDuplicateOperationId(const Aws::String& value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId = value; }

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline void SetDuplicateOperationId(Aws::String&& value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId = std::move(value); }

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline void SetDuplicateOperationId(const char* value) { m_duplicateOperationIdHasBeenSet = true; m_duplicateOperationId.assign(value); }

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(const Aws::String& value) { SetDuplicateOperationId(value); return *this;}

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(Aws::String&& value) { SetDuplicateOperationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the operation that is already in progress.</p>
     */
    inline DuplicateRequest& WithDuplicateOperationId(const char* value) { SetDuplicateOperationId(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_duplicateOperationId;
    bool m_duplicateOperationIdHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
