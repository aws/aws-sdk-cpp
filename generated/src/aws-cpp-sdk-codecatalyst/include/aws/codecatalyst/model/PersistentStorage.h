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
   * <p>Information about the persistent storage for a Dev Environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/PersistentStorage">AWS
   * API Reference</a></p>
   */
  class PersistentStorage
  {
  public:
    AWS_CODECATALYST_API PersistentStorage() = default;
    AWS_CODECATALYST_API PersistentStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API PersistentStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the persistent storage in gigabytes (specifically GiB).</p>
     *  <p>Valid values for storage are based on memory sizes in 16GB increments.
     * Valid values are 16, 32, and 64.</p> 
     */
    inline int GetSizeInGiB() const { return m_sizeInGiB; }
    inline bool SizeInGiBHasBeenSet() const { return m_sizeInGiBHasBeenSet; }
    inline void SetSizeInGiB(int value) { m_sizeInGiBHasBeenSet = true; m_sizeInGiB = value; }
    inline PersistentStorage& WithSizeInGiB(int value) { SetSizeInGiB(value); return *this;}
    ///@}
  private:

    int m_sizeInGiB{0};
    bool m_sizeInGiBHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
