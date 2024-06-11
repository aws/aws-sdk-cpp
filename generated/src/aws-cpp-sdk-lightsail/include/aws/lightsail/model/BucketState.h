/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the state of an Amazon Lightsail bucket.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/BucketState">AWS
   * API Reference</a></p>
   */
  class BucketState
  {
  public:
    AWS_LIGHTSAIL_API BucketState();
    AWS_LIGHTSAIL_API BucketState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API BucketState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The state code of the bucket.</p> <p>The following codes are possible:</p>
     * <ul> <li> <p> <code>OK</code> - The bucket is in a running state.</p> </li> <li>
     * <p> <code>Unknown</code> - Creation of the bucket might have timed-out. You
     * might want to delete the bucket and create a new one.</p> </li> </ul>
     */
    inline const Aws::String& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const Aws::String& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(Aws::String&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline void SetCode(const char* value) { m_codeHasBeenSet = true; m_code.assign(value); }
    inline BucketState& WithCode(const Aws::String& value) { SetCode(value); return *this;}
    inline BucketState& WithCode(Aws::String&& value) { SetCode(std::move(value)); return *this;}
    inline BucketState& WithCode(const char* value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the state of the bucket.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline BucketState& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline BucketState& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline BucketState& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
