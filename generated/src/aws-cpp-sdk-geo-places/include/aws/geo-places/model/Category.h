/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
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
namespace GeoPlaces
{
namespace Model
{

  /**
   * <p>Category of the <code>Place</code> returned. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/geo-places-2020-11-19/Category">AWS
   * API Reference</a></p>
   */
  class Category
  {
  public:
    AWS_GEOPLACES_API Category();
    AWS_GEOPLACES_API Category(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Category& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GEOPLACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The category ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Category& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Category& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Category& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Category& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Category& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Category& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Localized name of the category type.</p>
     */
    inline const Aws::String& GetLocalizedName() const{ return m_localizedName; }
    inline bool LocalizedNameHasBeenSet() const { return m_localizedNameHasBeenSet; }
    inline void SetLocalizedName(const Aws::String& value) { m_localizedNameHasBeenSet = true; m_localizedName = value; }
    inline void SetLocalizedName(Aws::String&& value) { m_localizedNameHasBeenSet = true; m_localizedName = std::move(value); }
    inline void SetLocalizedName(const char* value) { m_localizedNameHasBeenSet = true; m_localizedName.assign(value); }
    inline Category& WithLocalizedName(const Aws::String& value) { SetLocalizedName(value); return *this;}
    inline Category& WithLocalizedName(Aws::String&& value) { SetLocalizedName(std::move(value)); return *this;}
    inline Category& WithLocalizedName(const char* value) { SetLocalizedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean which indicates if this category is the primary offered by the
     * place.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }
    inline Category& WithPrimary(bool value) { SetPrimary(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_localizedName;
    bool m_localizedNameHasBeenSet = false;

    bool m_primary;
    bool m_primaryHasBeenSet = false;
  };

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
