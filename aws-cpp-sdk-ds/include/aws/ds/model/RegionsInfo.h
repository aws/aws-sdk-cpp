/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
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
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Provides information about the Regions that are configured for multi-Region
   * replication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/RegionsInfo">AWS API
   * Reference</a></p>
   */
  class RegionsInfo
  {
  public:
    AWS_DIRECTORYSERVICE_API RegionsInfo();
    AWS_DIRECTORYSERVICE_API RegionsInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API RegionsInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline const Aws::String& GetPrimaryRegion() const{ return m_primaryRegion; }

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline bool PrimaryRegionHasBeenSet() const { return m_primaryRegionHasBeenSet; }

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline void SetPrimaryRegion(const Aws::String& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = value; }

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline void SetPrimaryRegion(Aws::String&& value) { m_primaryRegionHasBeenSet = true; m_primaryRegion = std::move(value); }

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline void SetPrimaryRegion(const char* value) { m_primaryRegionHasBeenSet = true; m_primaryRegion.assign(value); }

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline RegionsInfo& WithPrimaryRegion(const Aws::String& value) { SetPrimaryRegion(value); return *this;}

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline RegionsInfo& WithPrimaryRegion(Aws::String&& value) { SetPrimaryRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where the Managed Microsoft AD directory was originally
     * created.</p>
     */
    inline RegionsInfo& WithPrimaryRegion(const char* value) { SetPrimaryRegion(value); return *this;}


    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalRegions() const{ return m_additionalRegions; }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline bool AdditionalRegionsHasBeenSet() const { return m_additionalRegionsHasBeenSet; }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline void SetAdditionalRegions(const Aws::Vector<Aws::String>& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions = value; }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline void SetAdditionalRegions(Aws::Vector<Aws::String>&& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions = std::move(value); }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline RegionsInfo& WithAdditionalRegions(const Aws::Vector<Aws::String>& value) { SetAdditionalRegions(value); return *this;}

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline RegionsInfo& WithAdditionalRegions(Aws::Vector<Aws::String>&& value) { SetAdditionalRegions(std::move(value)); return *this;}

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline RegionsInfo& AddAdditionalRegions(const Aws::String& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions.push_back(value); return *this; }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline RegionsInfo& AddAdditionalRegions(Aws::String&& value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions.push_back(std::move(value)); return *this; }

    /**
     * <p>Lists the Regions where the directory has been replicated, excluding the
     * primary Region.</p>
     */
    inline RegionsInfo& AddAdditionalRegions(const char* value) { m_additionalRegionsHasBeenSet = true; m_additionalRegions.push_back(value); return *this; }

  private:

    Aws::String m_primaryRegion;
    bool m_primaryRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalRegions;
    bool m_additionalRegionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
