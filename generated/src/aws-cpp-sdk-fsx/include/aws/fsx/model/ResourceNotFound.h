/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>The resource specified by the Amazon Resource Name (ARN) can't be
   * found.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ResourceNotFound">AWS
   * API Reference</a></p>
   */
  class ResourceNotFound
  {
  public:
    AWS_FSX_API ResourceNotFound();
    AWS_FSX_API ResourceNotFound(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ResourceNotFound& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline ResourceNotFound& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline ResourceNotFound& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The resource ARN of the resource that can't be found.</p>
     */
    inline ResourceNotFound& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFound& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFound& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFound& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
