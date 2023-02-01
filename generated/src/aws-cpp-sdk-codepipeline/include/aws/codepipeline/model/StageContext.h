/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about a stage to a job worker.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/StageContext">AWS
   * API Reference</a></p>
   */
  class StageContext
  {
  public:
    AWS_CODEPIPELINE_API StageContext();
    AWS_CODEPIPELINE_API StageContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API StageContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the stage.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the stage.</p>
     */
    inline StageContext& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageContext& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stage.</p>
     */
    inline StageContext& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
