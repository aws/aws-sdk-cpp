/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Asset.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>The dataset used for testing. Optionally, if <code>AutoCreate</code> is set,
   * Amazon Rekognition Custom Labels creates a testing dataset using an 80/20 split
   * of the training dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TestingData">AWS
   * API Reference</a></p>
   */
  class AWS_REKOGNITION_API TestingData
  {
  public:
    TestingData();
    TestingData(Aws::Utils::Json::JsonView jsonValue);
    TestingData& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The assets used for testing.</p>
     */
    inline const Aws::Vector<Asset>& GetAssets() const{ return m_assets; }

    /**
     * <p>The assets used for testing.</p>
     */
    inline bool AssetsHasBeenSet() const { return m_assetsHasBeenSet; }

    /**
     * <p>The assets used for testing.</p>
     */
    inline void SetAssets(const Aws::Vector<Asset>& value) { m_assetsHasBeenSet = true; m_assets = value; }

    /**
     * <p>The assets used for testing.</p>
     */
    inline void SetAssets(Aws::Vector<Asset>&& value) { m_assetsHasBeenSet = true; m_assets = std::move(value); }

    /**
     * <p>The assets used for testing.</p>
     */
    inline TestingData& WithAssets(const Aws::Vector<Asset>& value) { SetAssets(value); return *this;}

    /**
     * <p>The assets used for testing.</p>
     */
    inline TestingData& WithAssets(Aws::Vector<Asset>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>The assets used for testing.</p>
     */
    inline TestingData& AddAssets(const Asset& value) { m_assetsHasBeenSet = true; m_assets.push_back(value); return *this; }

    /**
     * <p>The assets used for testing.</p>
     */
    inline TestingData& AddAssets(Asset&& value) { m_assetsHasBeenSet = true; m_assets.push_back(std::move(value)); return *this; }


    /**
     * <p>If specified, Amazon Rekognition Custom Labels creates a testing dataset with
     * an 80/20 split of the training dataset.</p>
     */
    inline bool GetAutoCreate() const{ return m_autoCreate; }

    /**
     * <p>If specified, Amazon Rekognition Custom Labels creates a testing dataset with
     * an 80/20 split of the training dataset.</p>
     */
    inline bool AutoCreateHasBeenSet() const { return m_autoCreateHasBeenSet; }

    /**
     * <p>If specified, Amazon Rekognition Custom Labels creates a testing dataset with
     * an 80/20 split of the training dataset.</p>
     */
    inline void SetAutoCreate(bool value) { m_autoCreateHasBeenSet = true; m_autoCreate = value; }

    /**
     * <p>If specified, Amazon Rekognition Custom Labels creates a testing dataset with
     * an 80/20 split of the training dataset.</p>
     */
    inline TestingData& WithAutoCreate(bool value) { SetAutoCreate(value); return *this;}

  private:

    Aws::Vector<Asset> m_assets;
    bool m_assetsHasBeenSet;

    bool m_autoCreate;
    bool m_autoCreateHasBeenSet;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
