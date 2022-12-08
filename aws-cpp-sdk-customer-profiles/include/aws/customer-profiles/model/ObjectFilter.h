/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>The filter applied to ListProfileObjects response to include profile objects
   * with the specified index values. This filter is only supported for
   * ObjectTypeName _asset, _case and _order.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ObjectFilter">AWS
   * API Reference</a></p>
   */
  class ObjectFilter
  {
  public:
    AWS_CUSTOMERPROFILES_API ObjectFilter();
    AWS_CUSTOMERPROFILES_API ObjectFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ObjectFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline ObjectFilter& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline ObjectFilter& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}

    /**
     * <p>A searchable identifier of a standard profile object. The predefined keys you
     * can use to search for _asset include: _assetId, _assetName, _serialNumber. The
     * predefined keys you can use to search for _case include: _caseId. The predefined
     * keys you can use to search for _order include: _orderId.</p>
     */
    inline ObjectFilter& WithKeyName(const char* value) { SetKeyName(value); return *this;}


    /**
     * <p>A list of key values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of key values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of key values.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of key values.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of key values.</p>
     */
    inline ObjectFilter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline ObjectFilter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of key values.</p>
     */
    inline ObjectFilter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline ObjectFilter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of key values.</p>
     */
    inline ObjectFilter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
