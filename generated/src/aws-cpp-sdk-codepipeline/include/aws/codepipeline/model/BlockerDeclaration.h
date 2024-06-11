/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/BlockerType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/BlockerDeclaration">AWS
   * API Reference</a></p>
   */
  class BlockerDeclaration
  {
  public:
    AWS_CODEPIPELINE_API BlockerDeclaration();
    AWS_CODEPIPELINE_API BlockerDeclaration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API BlockerDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline BlockerDeclaration& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline BlockerDeclaration& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline BlockerDeclaration& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved for future use.</p>
     */
    inline const BlockerType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const BlockerType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(BlockerType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline BlockerDeclaration& WithType(const BlockerType& value) { SetType(value); return *this;}
    inline BlockerDeclaration& WithType(BlockerType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    BlockerType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
