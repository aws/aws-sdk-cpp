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
   * <p>Describes why a resource lifecycle state changed.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/LifecycleTransitionReason">AWS
   * API Reference</a></p>
   */
  class LifecycleTransitionReason
  {
  public:
    AWS_FSX_API LifecycleTransitionReason();
    AWS_FSX_API LifecycleTransitionReason(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API LifecycleTransitionReason& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline LifecycleTransitionReason& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline LifecycleTransitionReason& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline LifecycleTransitionReason& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
