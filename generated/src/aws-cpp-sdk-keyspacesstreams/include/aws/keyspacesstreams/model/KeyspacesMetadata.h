/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspacesstreams/KeyspacesStreams_EXPORTS.h>
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
namespace KeyspacesStreams
{
namespace Model
{

  /**
   * <p>Contains metadata information associated with Amazon Keyspaces cells and
   * rows.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspacesstreams-2024-09-09/KeyspacesMetadata">AWS
   * API Reference</a></p>
   */
  class KeyspacesMetadata
  {
  public:
    AWS_KEYSPACESSTREAMS_API KeyspacesMetadata() = default;
    AWS_KEYSPACESSTREAMS_API KeyspacesMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API KeyspacesMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACESSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time at which the associated data will expire, based on the time-to-live
     * (TTL) setting.</p>
     */
    inline const Aws::String& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::String>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::String>
    KeyspacesMetadata& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the associated data was written to the database.</p>
     */
    inline const Aws::String& GetWriteTime() const { return m_writeTime; }
    inline bool WriteTimeHasBeenSet() const { return m_writeTimeHasBeenSet; }
    template<typename WriteTimeT = Aws::String>
    void SetWriteTime(WriteTimeT&& value) { m_writeTimeHasBeenSet = true; m_writeTime = std::forward<WriteTimeT>(value); }
    template<typename WriteTimeT = Aws::String>
    KeyspacesMetadata& WithWriteTime(WriteTimeT&& value) { SetWriteTime(std::forward<WriteTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_expirationTime;
    bool m_expirationTimeHasBeenSet = false;

    Aws::String m_writeTime;
    bool m_writeTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace KeyspacesStreams
} // namespace Aws
