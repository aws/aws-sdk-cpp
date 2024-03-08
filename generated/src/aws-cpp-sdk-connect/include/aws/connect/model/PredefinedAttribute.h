/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/PredefinedAttributeValues.h>
#include <aws/core/utils/DateTime.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about a predefined attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PredefinedAttribute">AWS
   * API Reference</a></p>
   */
  class PredefinedAttribute
  {
  public:
    AWS_CONNECT_API PredefinedAttribute();
    AWS_CONNECT_API PredefinedAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API PredefinedAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline PredefinedAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline PredefinedAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the predefined attribute.</p>
     */
    inline PredefinedAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline const PredefinedAttributeValues& GetValues() const{ return m_values; }

    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline void SetValues(const PredefinedAttributeValues& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline void SetValues(PredefinedAttributeValues&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline PredefinedAttribute& WithValues(const PredefinedAttributeValues& value) { SetValues(value); return *this;}

    /**
     * <p>The values of the predefined attribute.</p>
     */
    inline PredefinedAttribute& WithValues(PredefinedAttributeValues&& value) { SetValues(std::move(value)); return *this;}


    /**
     * <p>Last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>Last modified time.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>Last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>Last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>Last modified time.</p>
     */
    inline PredefinedAttribute& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>Last modified time.</p>
     */
    inline PredefinedAttribute& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>Last modified region.</p>
     */
    inline const Aws::String& GetLastModifiedRegion() const{ return m_lastModifiedRegion; }

    /**
     * <p>Last modified region.</p>
     */
    inline bool LastModifiedRegionHasBeenSet() const { return m_lastModifiedRegionHasBeenSet; }

    /**
     * <p>Last modified region.</p>
     */
    inline void SetLastModifiedRegion(const Aws::String& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = value; }

    /**
     * <p>Last modified region.</p>
     */
    inline void SetLastModifiedRegion(Aws::String&& value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion = std::move(value); }

    /**
     * <p>Last modified region.</p>
     */
    inline void SetLastModifiedRegion(const char* value) { m_lastModifiedRegionHasBeenSet = true; m_lastModifiedRegion.assign(value); }

    /**
     * <p>Last modified region.</p>
     */
    inline PredefinedAttribute& WithLastModifiedRegion(const Aws::String& value) { SetLastModifiedRegion(value); return *this;}

    /**
     * <p>Last modified region.</p>
     */
    inline PredefinedAttribute& WithLastModifiedRegion(Aws::String&& value) { SetLastModifiedRegion(std::move(value)); return *this;}

    /**
     * <p>Last modified region.</p>
     */
    inline PredefinedAttribute& WithLastModifiedRegion(const char* value) { SetLastModifiedRegion(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PredefinedAttributeValues m_values;
    bool m_valuesHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_lastModifiedRegion;
    bool m_lastModifiedRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
