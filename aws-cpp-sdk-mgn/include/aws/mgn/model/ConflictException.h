/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>The request could not be completed due to a conflict with the current state
   * of the target resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ConflictException">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API ConflictException
  {
  public:
    ConflictException();
    ConflictException(Aws::Utils::Json::JsonView jsonValue);
    ConflictException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline ConflictException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline ConflictException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline ConflictException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ConflictException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ConflictException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ConflictException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline ConflictException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline ConflictException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>A conflict occured when prompting for the Resource ID.</p>
     */
    inline ConflictException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline ConflictException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline ConflictException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>A conflict occured when prompting for resource type.</p>
     */
    inline ConflictException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_code;
    bool m_codeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
