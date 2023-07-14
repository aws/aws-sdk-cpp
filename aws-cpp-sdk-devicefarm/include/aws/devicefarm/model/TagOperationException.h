﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
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
namespace DeviceFarm
{
namespace Model
{

  /**
   * <p>The operation was not successful. Try again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/devicefarm-2015-06-23/TagOperationException">AWS
   * API Reference</a></p>
   */
  class AWS_DEVICEFARM_API TagOperationException
  {
  public:
    TagOperationException();
    TagOperationException(Aws::Utils::Json::JsonView jsonValue);
    TagOperationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TagOperationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TagOperationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TagOperationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    
    inline TagOperationException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    
    inline TagOperationException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    
    inline TagOperationException& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
