/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/clouddirectory/model/RuleType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudDirectory
{
namespace Model
{

  /**
   * <p>Contains an Amazon Resource Name (ARN) and parameters that are associated
   * with the rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/clouddirectory-2017-01-11/Rule">AWS
   * API Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_CLOUDDIRECTORY_API Rule();
    AWS_CLOUDDIRECTORY_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDDIRECTORY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline const RuleType& GetType() const{ return m_type; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline void SetType(const RuleType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline void SetType(RuleType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline Rule& WithType(const RuleType& value) { SetType(value); return *this;}

    /**
     * <p>The type of attribute validation rule.</p>
     */
    inline Rule& WithType(RuleType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The minimum and maximum parameters that are associated with the rule.</p>
     */
    inline Rule& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }

  private:

    RuleType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
