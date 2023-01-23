/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>The ThingTypeMetadata contains additional information about the thing type
   * including: creation date and time, a value indicating whether the thing type is
   * deprecated, and a date and time when time was deprecated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingTypeMetadata">AWS
   * API Reference</a></p>
   */
  class ThingTypeMetadata
  {
  public:
    AWS_IOT_API ThingTypeMetadata();
    AWS_IOT_API ThingTypeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline bool GetDeprecated() const{ return m_deprecated; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline bool DeprecatedHasBeenSet() const { return m_deprecatedHasBeenSet; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }

    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline ThingTypeMetadata& WithDeprecated(bool value) { SetDeprecated(value); return *this;}


    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const{ return m_deprecationDate; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline void SetDeprecationDate(const Aws::Utils::DateTime& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = value; }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline void SetDeprecationDate(Aws::Utils::DateTime&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::move(value); }

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline ThingTypeMetadata& WithDeprecationDate(const Aws::Utils::DateTime& value) { SetDeprecationDate(value); return *this;}

    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline ThingTypeMetadata& WithDeprecationDate(Aws::Utils::DateTime&& value) { SetDeprecationDate(std::move(value)); return *this;}


    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline ThingTypeMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline ThingTypeMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    bool m_deprecated;
    bool m_deprecatedHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate;
    bool m_deprecationDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
