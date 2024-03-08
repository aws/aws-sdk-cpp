/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataProductItem">AWS
   * API Reference</a></p>
   */
  class DataProductItem
  {
  public:
    AWS_DATAZONE_API DataProductItem();
    AWS_DATAZONE_API DataProductItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p/>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p/>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p/>
     */
    inline DataProductItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p/>
     */
    inline DataProductItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataProductItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetItemId() const{ return m_itemId; }

    /**
     * <p/>
     */
    inline bool ItemIdHasBeenSet() const { return m_itemIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetItemId(const Aws::String& value) { m_itemIdHasBeenSet = true; m_itemId = value; }

    /**
     * <p/>
     */
    inline void SetItemId(Aws::String&& value) { m_itemIdHasBeenSet = true; m_itemId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetItemId(const char* value) { m_itemIdHasBeenSet = true; m_itemId.assign(value); }

    /**
     * <p/>
     */
    inline DataProductItem& WithItemId(const Aws::String& value) { SetItemId(value); return *this;}

    /**
     * <p/>
     */
    inline DataProductItem& WithItemId(Aws::String&& value) { SetItemId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline DataProductItem& WithItemId(const char* value) { SetItemId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_itemId;
    bool m_itemIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
