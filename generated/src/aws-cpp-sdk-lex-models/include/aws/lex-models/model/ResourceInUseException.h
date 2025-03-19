/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/model/ReferenceType.h>
#include <aws/lex-models/model/ResourceReference.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>The resource that you are attempting to delete is referred to by another
   * resource. Use this information to remove references to the resource that you are
   * trying to delete.</p> <p>The body of the exception contains a JSON object that
   * describes the resource.</p> <p> <code>{ "resourceType": BOT | BOTALIAS |
   * BOTCHANNEL | INTENT,</code> </p> <p> <code>"resourceReference": {</code> </p>
   * <p> <code>"name": <i>string</i>, "version": <i>string</i> } }</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/ResourceInUseException">AWS
   * API Reference</a></p>
   */
  class ResourceInUseException
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException() = default;
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline ReferenceType GetReferenceType() const { return m_referenceType; }
    inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
    inline void SetReferenceType(ReferenceType value) { m_referenceTypeHasBeenSet = true; m_referenceType = value; }
    inline ResourceInUseException& WithReferenceType(ReferenceType value) { SetReferenceType(value); return *this;}
    ///@}

    ///@{
    
    inline const ResourceReference& GetExampleReference() const { return m_exampleReference; }
    inline bool ExampleReferenceHasBeenSet() const { return m_exampleReferenceHasBeenSet; }
    template<typename ExampleReferenceT = ResourceReference>
    void SetExampleReference(ExampleReferenceT&& value) { m_exampleReferenceHasBeenSet = true; m_exampleReference = std::forward<ExampleReferenceT>(value); }
    template<typename ExampleReferenceT = ResourceReference>
    ResourceInUseException& WithExampleReference(ExampleReferenceT&& value) { SetExampleReference(std::forward<ExampleReferenceT>(value)); return *this;}
    ///@}
  private:

    ReferenceType m_referenceType{ReferenceType::NOT_SET};
    bool m_referenceTypeHasBeenSet = false;

    ResourceReference m_exampleReference;
    bool m_exampleReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
