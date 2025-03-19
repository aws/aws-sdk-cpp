/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A specified entity does not exist</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EntityNotFoundException">AWS
   * API Reference</a></p>
   */
  class EntityNotFoundException
  {
  public:
    AWS_GLUE_API EntityNotFoundException() = default;
    AWS_GLUE_API EntityNotFoundException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EntityNotFoundException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    EntityNotFoundException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the exception relates to a federated source.</p>
     */
    inline bool GetFromFederationSource() const { return m_fromFederationSource; }
    inline bool FromFederationSourceHasBeenSet() const { return m_fromFederationSourceHasBeenSet; }
    inline void SetFromFederationSource(bool value) { m_fromFederationSourceHasBeenSet = true; m_fromFederationSource = value; }
    inline EntityNotFoundException& WithFromFederationSource(bool value) { SetFromFederationSource(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_fromFederationSource{false};
    bool m_fromFederationSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
