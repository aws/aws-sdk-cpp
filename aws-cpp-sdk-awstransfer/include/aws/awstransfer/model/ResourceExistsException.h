/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>The requested resource does not exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ResourceExistsException">AWS
   * API Reference</a></p>
   */
  class ResourceExistsException
  {
  public:
    AWS_TRANSFER_API ResourceExistsException();
    AWS_TRANSFER_API ResourceExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ResourceExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceExistsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceExistsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceExistsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResource() const{ return m_resource; }

    
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    
    inline ResourceExistsException& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    
    inline ResourceExistsException& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    
    inline ResourceExistsException& WithResource(const char* value) { SetResource(value); return *this;}


    
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    
    inline ResourceExistsException& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    
    inline ResourceExistsException& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    
    inline ResourceExistsException& WithResourceType(const char* value) { SetResourceType(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
