/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/finspace/model/KxNAS1Type.h>
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
namespace finspace
{
namespace Model
{

  /**
   * <p> The structure containing the size and type of the network attached storage
   * (NAS_1) file system volume. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/finspace-2021-03-12/KxNAS1Configuration">AWS
   * API Reference</a></p>
   */
  class KxNAS1Configuration
  {
  public:
    AWS_FINSPACE_API KxNAS1Configuration() = default;
    AWS_FINSPACE_API KxNAS1Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxNAS1Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The type of the network attached storage. </p>
     */
    inline KxNAS1Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(KxNAS1Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline KxNAS1Configuration& WithType(KxNAS1Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the network attached storage. For storage type
     * <code>SSD_1000</code> and <code>SSD_250</code> you can select the minimum size
     * as 1200 GB or increments of 2400 GB. For storage type <code>HDD_12</code> you
     * can select the minimum size as 6000 GB or increments of 6000 GB.</p>
     */
    inline int GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }
    inline KxNAS1Configuration& WithSize(int value) { SetSize(value); return *this;}
    ///@}
  private:

    KxNAS1Type m_type{KxNAS1Type::NOT_SET};
    bool m_typeHasBeenSet = false;

    int m_size{0};
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
