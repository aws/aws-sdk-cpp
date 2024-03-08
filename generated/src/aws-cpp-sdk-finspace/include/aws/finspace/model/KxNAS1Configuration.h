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
    AWS_FINSPACE_API KxNAS1Configuration();
    AWS_FINSPACE_API KxNAS1Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API KxNAS1Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FINSPACE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of the network attached storage. </p>
     */
    inline const KxNAS1Type& GetType() const{ return m_type; }

    /**
     * <p> The type of the network attached storage. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the network attached storage. </p>
     */
    inline void SetType(const KxNAS1Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the network attached storage. </p>
     */
    inline void SetType(KxNAS1Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the network attached storage. </p>
     */
    inline KxNAS1Configuration& WithType(const KxNAS1Type& value) { SetType(value); return *this;}

    /**
     * <p> The type of the network attached storage. </p>
     */
    inline KxNAS1Configuration& WithType(KxNAS1Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The size of the network attached storage.</p>
     */
    inline int GetSize() const{ return m_size; }

    /**
     * <p> The size of the network attached storage.</p>
     */
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }

    /**
     * <p> The size of the network attached storage.</p>
     */
    inline void SetSize(int value) { m_sizeHasBeenSet = true; m_size = value; }

    /**
     * <p> The size of the network attached storage.</p>
     */
    inline KxNAS1Configuration& WithSize(int value) { SetSize(value); return *this;}

  private:

    KxNAS1Type m_type;
    bool m_typeHasBeenSet = false;

    int m_size;
    bool m_sizeHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
