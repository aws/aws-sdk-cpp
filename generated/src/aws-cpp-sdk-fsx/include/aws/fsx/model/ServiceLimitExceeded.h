/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/ServiceLimit.h>
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
   * <p>An error indicating that a particular service limit was exceeded. You can
   * increase some service limits by contacting Amazon Web
   * ServicesSupport.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ServiceLimitExceeded">AWS
   * API Reference</a></p>
   */
  class ServiceLimitExceeded
  {
  public:
    AWS_FSX_API ServiceLimitExceeded() = default;
    AWS_FSX_API ServiceLimitExceeded(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API ServiceLimitExceeded& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enumeration of the service limit that was exceeded. </p>
     */
    inline ServiceLimit GetLimit() const { return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(ServiceLimit value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ServiceLimitExceeded& WithLimit(ServiceLimit value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ServiceLimitExceeded& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    ServiceLimit m_limit{ServiceLimit::NOT_SET};
    bool m_limitHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
