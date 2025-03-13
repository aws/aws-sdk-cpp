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
   * <p>A federated resource already exists.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FederatedResourceAlreadyExistsException">AWS
   * API Reference</a></p>
   */
  class FederatedResourceAlreadyExistsException
  {
  public:
    AWS_GLUE_API FederatedResourceAlreadyExistsException() = default;
    AWS_GLUE_API FederatedResourceAlreadyExistsException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FederatedResourceAlreadyExistsException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message describing the problem.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FederatedResourceAlreadyExistsException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated Glue resource already exists.</p>
     */
    inline const Aws::String& GetAssociatedGlueResource() const { return m_associatedGlueResource; }
    inline bool AssociatedGlueResourceHasBeenSet() const { return m_associatedGlueResourceHasBeenSet; }
    template<typename AssociatedGlueResourceT = Aws::String>
    void SetAssociatedGlueResource(AssociatedGlueResourceT&& value) { m_associatedGlueResourceHasBeenSet = true; m_associatedGlueResource = std::forward<AssociatedGlueResourceT>(value); }
    template<typename AssociatedGlueResourceT = Aws::String>
    FederatedResourceAlreadyExistsException& WithAssociatedGlueResource(AssociatedGlueResourceT&& value) { SetAssociatedGlueResource(std::forward<AssociatedGlueResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_associatedGlueResource;
    bool m_associatedGlueResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
