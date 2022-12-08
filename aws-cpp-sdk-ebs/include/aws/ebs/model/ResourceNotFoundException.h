/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ResourceNotFoundExceptionReason.h>
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
namespace EBS
{
namespace Model
{

  /**
   * <p>The specified resource does not exist.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ebs-2019-11-02/ResourceNotFoundException">AWS
   * API Reference</a></p>
   */
  class ResourceNotFoundException
  {
  public:
    AWS_EBS_API ResourceNotFoundException();
    AWS_EBS_API ResourceNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API ResourceNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EBS_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ResourceNotFoundException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ResourceNotFoundException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ResourceNotFoundException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The reason for the exception.</p>
     */
    inline const ResourceNotFoundExceptionReason& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(const ResourceNotFoundExceptionReason& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the exception.</p>
     */
    inline void SetReason(ResourceNotFoundExceptionReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the exception.</p>
     */
    inline ResourceNotFoundException& WithReason(const ResourceNotFoundExceptionReason& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the exception.</p>
     */
    inline ResourceNotFoundException& WithReason(ResourceNotFoundExceptionReason&& value) { SetReason(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ResourceNotFoundExceptionReason m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
