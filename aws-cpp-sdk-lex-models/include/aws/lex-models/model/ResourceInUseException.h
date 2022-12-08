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
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException();
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API ResourceInUseException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const ReferenceType& GetReferenceType() const{ return m_referenceType; }

    
    inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }

    
    inline void SetReferenceType(const ReferenceType& value) { m_referenceTypeHasBeenSet = true; m_referenceType = value; }

    
    inline void SetReferenceType(ReferenceType&& value) { m_referenceTypeHasBeenSet = true; m_referenceType = std::move(value); }

    
    inline ResourceInUseException& WithReferenceType(const ReferenceType& value) { SetReferenceType(value); return *this;}

    
    inline ResourceInUseException& WithReferenceType(ReferenceType&& value) { SetReferenceType(std::move(value)); return *this;}


    
    inline const ResourceReference& GetExampleReference() const{ return m_exampleReference; }

    
    inline bool ExampleReferenceHasBeenSet() const { return m_exampleReferenceHasBeenSet; }

    
    inline void SetExampleReference(const ResourceReference& value) { m_exampleReferenceHasBeenSet = true; m_exampleReference = value; }

    
    inline void SetExampleReference(ResourceReference&& value) { m_exampleReferenceHasBeenSet = true; m_exampleReference = std::move(value); }

    
    inline ResourceInUseException& WithExampleReference(const ResourceReference& value) { SetExampleReference(value); return *this;}

    
    inline ResourceInUseException& WithExampleReference(ResourceReference&& value) { SetExampleReference(std::move(value)); return *this;}

  private:

    ReferenceType m_referenceType;
    bool m_referenceTypeHasBeenSet = false;

    ResourceReference m_exampleReference;
    bool m_exampleReferenceHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
