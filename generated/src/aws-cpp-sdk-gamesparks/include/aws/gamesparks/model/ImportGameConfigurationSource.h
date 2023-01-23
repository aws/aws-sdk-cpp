/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamesparks/GameSparks_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
namespace GameSparks
{
namespace Model
{

  /**
   * <p>The source used to import configuration sections.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamesparks-2021-08-17/ImportGameConfigurationSource">AWS
   * API Reference</a></p>
   */
  class ImportGameConfigurationSource
  {
  public:
    AWS_GAMESPARKS_API ImportGameConfigurationSource();
    AWS_GAMESPARKS_API ImportGameConfigurationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API ImportGameConfigurationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMESPARKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetFile() const{ return m_file; }

    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline bool FileHasBeenSet() const { return m_fileHasBeenSet; }

    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline void SetFile(const Aws::Utils::ByteBuffer& value) { m_fileHasBeenSet = true; m_file = value; }

    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline void SetFile(Aws::Utils::ByteBuffer&& value) { m_fileHasBeenSet = true; m_file = std::move(value); }

    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline ImportGameConfigurationSource& WithFile(const Aws::Utils::ByteBuffer& value) { SetFile(value); return *this;}

    /**
     * <p>The JSON string containing the configuration sections.</p>
     */
    inline ImportGameConfigurationSource& WithFile(Aws::Utils::ByteBuffer&& value) { SetFile(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_file;
    bool m_fileHasBeenSet = false;
  };

} // namespace Model
} // namespace GameSparks
} // namespace Aws
