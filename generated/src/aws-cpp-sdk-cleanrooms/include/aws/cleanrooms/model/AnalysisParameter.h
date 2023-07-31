/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ParameterType.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Optional. The member who can query can provide this placeholder for a literal
   * data value in an analysis template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisParameter">AWS
   * API Reference</a></p>
   */
  class AnalysisParameter
  {
  public:
    AWS_CLEANROOMS_API AnalysisParameter();
    AWS_CLEANROOMS_API AnalysisParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline AnalysisParameter& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline AnalysisParameter& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter. The name must use only alphanumeric, underscore
     * (_), or hyphen (-) characters but cannot start or end with a hyphen.</p>
     */
    inline AnalysisParameter& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of parameter.</p>
     */
    inline const ParameterType& GetType() const{ return m_type; }

    /**
     * <p>The type of parameter.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of parameter.</p>
     */
    inline void SetType(const ParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of parameter.</p>
     */
    inline void SetType(ParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of parameter.</p>
     */
    inline AnalysisParameter& WithType(const ParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The type of parameter.</p>
     */
    inline AnalysisParameter& WithType(ParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline AnalysisParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline AnalysisParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>Optional. The default value that is applied in the analysis template. The
     * member who can query can override this value in the query editor.</p>
     */
    inline AnalysisParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
