﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>You've reached the limit for the number of tags allowed for a resource. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html#tag-conventions">Tag
   * naming limits and requirements</a> in the <i>Amazon Web Services General
   * Reference</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/TooManyTagsException">AWS
   * API Reference</a></p>
   */
  class AWS_IOTSITEWISE_API TooManyTagsException
  {
  public:
    TooManyTagsException();
    TooManyTagsException(Aws::Utils::Json::JsonView jsonValue);
    TooManyTagsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline TooManyTagsException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline TooManyTagsException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline TooManyTagsException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline TooManyTagsException& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline TooManyTagsException& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource with too many tags.</p>
     */
    inline TooManyTagsException& WithResourceName(const char* value) { SetResourceName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
