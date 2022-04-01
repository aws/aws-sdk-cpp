﻿/**
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
   * <p>Resource not found exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class AWS_MGN_API ResourceNotFoundException
  {
  public:
    ResourceNotFoundException();
    ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetCode() const{ return m_code; }

    
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }

    
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }

    
    inline ResourceNotFoundException& WithCode(const Aws::String& value) { SetCode(value); return *this;}

    
    inline ResourceNotFoundException& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithCode(const char* value) { SetCode(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Resource ID not found error.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Resource ID not found error.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>Resource ID not found error.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Resource ID not found error.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>Resource ID not found error.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Resource ID not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Resource ID not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>Resource ID not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Resource type not found error.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Resource type not found error.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Resource type not found error.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Resource type not found error.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Resource type not found error.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Resource type not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Resource type not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Resource type not found error.</p>
     */
    inline ResourceNotFoundException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

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
