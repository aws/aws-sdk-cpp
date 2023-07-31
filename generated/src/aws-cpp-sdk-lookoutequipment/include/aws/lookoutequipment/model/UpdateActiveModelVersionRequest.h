/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/lookoutequipment/LookoutEquipmentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

  /**
   */
  class UpdateActiveModelVersionRequest : public LookoutEquipmentRequest
  {
  public:
    AWS_LOOKOUTEQUIPMENT_API UpdateActiveModelVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateActiveModelVersion"; }

    AWS_LOOKOUTEQUIPMENT_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTEQUIPMENT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline const Aws::String& GetModelName() const{ return m_modelName; }

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline void SetModelName(const Aws::String& value) { m_modelNameHasBeenSet = true; m_modelName = value; }

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline void SetModelName(Aws::String&& value) { m_modelNameHasBeenSet = true; m_modelName = std::move(value); }

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline void SetModelName(const char* value) { m_modelNameHasBeenSet = true; m_modelName.assign(value); }

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline UpdateActiveModelVersionRequest& WithModelName(const Aws::String& value) { SetModelName(value); return *this;}

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline UpdateActiveModelVersionRequest& WithModelName(Aws::String&& value) { SetModelName(std::move(value)); return *this;}

    /**
     * <p>The name of the machine learning model for which the active model version is
     * being set.</p>
     */
    inline UpdateActiveModelVersionRequest& WithModelName(const char* value) { SetModelName(value); return *this;}


    /**
     * <p>The version of the machine learning model for which the active model version
     * is being set.</p>
     */
    inline long long GetModelVersion() const{ return m_modelVersion; }

    /**
     * <p>The version of the machine learning model for which the active model version
     * is being set.</p>
     */
    inline bool ModelVersionHasBeenSet() const { return m_modelVersionHasBeenSet; }

    /**
     * <p>The version of the machine learning model for which the active model version
     * is being set.</p>
     */
    inline void SetModelVersion(long long value) { m_modelVersionHasBeenSet = true; m_modelVersion = value; }

    /**
     * <p>The version of the machine learning model for which the active model version
     * is being set.</p>
     */
    inline UpdateActiveModelVersionRequest& WithModelVersion(long long value) { SetModelVersion(value); return *this;}

  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    long long m_modelVersion;
    bool m_modelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
