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
    AWS_IOT_API ThingTypeMetadata() = default;
    AWS_IOT_API ThingTypeMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingTypeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether the thing type is deprecated. If <b>true</b>, no new things could be
     * associated with this type.</p>
     */
    inline bool GetDeprecated() const { return m_deprecated; }
    inline bool DeprecatedHasBeenSet() const { return m_deprecatedHasBeenSet; }
    inline void SetDeprecated(bool value) { m_deprecatedHasBeenSet = true; m_deprecated = value; }
    inline ThingTypeMetadata& WithDeprecated(bool value) { SetDeprecated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the thing type was deprecated.</p>
     */
    inline const Aws::Utils::DateTime& GetDeprecationDate() const { return m_deprecationDate; }
    inline bool DeprecationDateHasBeenSet() const { return m_deprecationDateHasBeenSet; }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    void SetDeprecationDate(DeprecationDateT&& value) { m_deprecationDateHasBeenSet = true; m_deprecationDate = std::forward<DeprecationDateT>(value); }
    template<typename DeprecationDateT = Aws::Utils::DateTime>
    ThingTypeMetadata& WithDeprecationDate(DeprecationDateT&& value) { SetDeprecationDate(std::forward<DeprecationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the thing type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ThingTypeMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    bool m_deprecated{false};
    bool m_deprecatedHasBeenSet = false;

    Aws::Utils::DateTime m_deprecationDate{};
    bool m_deprecationDateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
