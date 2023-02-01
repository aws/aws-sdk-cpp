/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Account limits for this resource have been exceeded.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ResourceLimitExceededException">AWS
   * API Reference</a></p>
   */
  class ResourceLimitExceededException
  {
  public:
    AWS_GROUNDSTATION_API ResourceLimitExceededException();
    AWS_GROUNDSTATION_API ResourceLimitExceededException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API ResourceLimitExceededException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceLimitExceededException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceLimitExceededException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceLimitExceededException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }

    /**
     * <p/>
     */
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }

    /**
     * <p/>
     */
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }

    /**
     * <p/>
     */
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }

    /**
     * <p/>
     */
    inline ResourceLimitExceededException& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}

    /**
     * <p/>
     */
    inline ResourceLimitExceededException& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline ResourceLimitExceededException& WithParameterName(const char* value) { SetParameterName(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
