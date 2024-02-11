/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The storage configuration used for recommendations.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/StorageConfiguration">AWS
   * API Reference</a></p>
   */
  class StorageConfiguration
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API StorageConfiguration();
    AWS_COSTOPTIMIZATIONHUB_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The storage volume.</p>
     */
    inline double GetSizeInGb() const{ return m_sizeInGb; }

    /**
     * <p>The storage volume.</p>
     */
    inline bool SizeInGbHasBeenSet() const { return m_sizeInGbHasBeenSet; }

    /**
     * <p>The storage volume.</p>
     */
    inline void SetSizeInGb(double value) { m_sizeInGbHasBeenSet = true; m_sizeInGb = value; }

    /**
     * <p>The storage volume.</p>
     */
    inline StorageConfiguration& WithSizeInGb(double value) { SetSizeInGb(value); return *this;}


    /**
     * <p>The storage type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The storage type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The storage type.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The storage type.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The storage type.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The storage type.</p>
     */
    inline StorageConfiguration& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The storage type.</p>
     */
    inline StorageConfiguration& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The storage type.</p>
     */
    inline StorageConfiguration& WithType(const char* value) { SetType(value); return *this;}

  private:

    double m_sizeInGb;
    bool m_sizeInGbHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
