/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p> Hash</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/Hash">AWS API
   * Reference</a></p>
   */
  class Hash
  {
  public:
    AWS_CLEANROOMS_API Hash() = default;
    AWS_CLEANROOMS_API Hash(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Hash& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The SHA-256 hash value.</p>
     */
    inline const Aws::String& GetSha256() const { return m_sha256; }
    inline bool Sha256HasBeenSet() const { return m_sha256HasBeenSet; }
    template<typename Sha256T = Aws::String>
    void SetSha256(Sha256T&& value) { m_sha256HasBeenSet = true; m_sha256 = std::forward<Sha256T>(value); }
    template<typename Sha256T = Aws::String>
    Hash& WithSha256(Sha256T&& value) { SetSha256(std::forward<Sha256T>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sha256;
    bool m_sha256HasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
