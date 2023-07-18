﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>Information about the job error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ImportAssetFromSignedUrlJobErrorDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DATAEXCHANGE_API ImportAssetFromSignedUrlJobErrorDetails
  {
  public:
    ImportAssetFromSignedUrlJobErrorDetails();
    ImportAssetFromSignedUrlJobErrorDetails(Aws::Utils::Json::JsonView jsonValue);
    ImportAssetFromSignedUrlJobErrorDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about the job error.</p>
     */
    inline const Aws::String& GetAssetName() const{ return m_assetName; }

    /**
     * <p>Information about the job error.</p>
     */
    inline bool AssetNameHasBeenSet() const { return m_assetNameHasBeenSet; }

    /**
     * <p>Information about the job error.</p>
     */
    inline void SetAssetName(const Aws::String& value) { m_assetNameHasBeenSet = true; m_assetName = value; }

    /**
     * <p>Information about the job error.</p>
     */
    inline void SetAssetName(Aws::String&& value) { m_assetNameHasBeenSet = true; m_assetName = std::move(value); }

    /**
     * <p>Information about the job error.</p>
     */
    inline void SetAssetName(const char* value) { m_assetNameHasBeenSet = true; m_assetName.assign(value); }

    /**
     * <p>Information about the job error.</p>
     */
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(const Aws::String& value) { SetAssetName(value); return *this;}

    /**
     * <p>Information about the job error.</p>
     */
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(Aws::String&& value) { SetAssetName(std::move(value)); return *this;}

    /**
     * <p>Information about the job error.</p>
     */
    inline ImportAssetFromSignedUrlJobErrorDetails& WithAssetName(const char* value) { SetAssetName(value); return *this;}

  private:

    Aws::String m_assetName;
    bool m_assetNameHasBeenSet;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
