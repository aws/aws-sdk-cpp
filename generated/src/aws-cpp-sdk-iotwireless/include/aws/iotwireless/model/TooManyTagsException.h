/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>The request was denied because the resource can't have any more
   * tags.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/TooManyTagsException">AWS
   * API Reference</a></p>
   */
  class TooManyTagsException
  {
  public:
    AWS_IOTWIRELESS_API TooManyTagsException();
    AWS_IOTWIRELESS_API TooManyTagsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API TooManyTagsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyTagsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyTagsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyTagsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline TooManyTagsException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline TooManyTagsException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>Name of the resource that exceeds maximum number of tags allowed.</p>
     */
    inline TooManyTagsException& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
