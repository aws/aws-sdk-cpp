/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>

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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about the configuration of persistent storage for a Dev
   * Environment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/PersistentStorageConfiguration">AWS
   * API Reference</a></p>
   */
  class PersistentStorageConfiguration
  {
  public:
    AWS_CODECATALYST_API PersistentStorageConfiguration();
    AWS_CODECATALYST_API PersistentStorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API PersistentStorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The size of the persistent storage in gigabytes (specifically GiB).</p>
     *  <p>Valid values for storage are based on memory sizes in 16GB increments.
     * Valid values are 16, 32, and 64.</p> 
     */
    inline int GetSizeInGiB() const{ return m_sizeInGiB; }

    /**
     * <p>The size of the persistent storage in gigabytes (specifically GiB).</p>
     *  <p>Valid values for storage are based on memory sizes in 16GB increments.
     * Valid values are 16, 32, and 64.</p> 
     */
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }

    /**
     * <p>The size of the persistent storage in gigabytes (specifically GiB).</p>
     *  <p>Valid values for storage are based on memory sizes in 16GB increments.
     * Valid values are 16, 32, and 64.</p> 
     */
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }

    /**
     * <p>The size of the persistent storage in gigabytes (specifically GiB).</p>
     *  <p>Valid values for storage are based on memory sizes in 16GB increments.
     * Valid values are 16, 32, and 64.</p> 
     */
    inline PersistentStorageConfiguration& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}

  private:

    int m_sizeInGiB;
    bool m_sizeInGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
