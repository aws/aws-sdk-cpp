/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ResultFormat.h>
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
   * <p>Contains the configuration to write the query results to S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedQueryS3OutputConfiguration">AWS
   * API Reference</a></p>
   */
  class ProtectedQueryS3OutputConfiguration
  {
  public:
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration() = default;
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API ProtectedQueryS3OutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Intended file format of the result.</p>
     */
    inline ResultFormat GetResultFormat() const { return m_resultFormat; }
    inline bool ResultFormatHasBeenSet() const { return m_resultFormatHasBeenSet; }
    inline void SetResultFormat(ResultFormat value) { m_resultFormatHasBeenSet = true; m_resultFormat = value; }
    inline ProtectedQueryS3OutputConfiguration& WithResultFormat(ResultFormat value) { SetResultFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket to unload the protected query results.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    ProtectedQueryS3OutputConfiguration& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 prefix to unload the protected query results.</p>
     */
    inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
    template<typename KeyPrefixT = Aws::String>
    void SetKeyPrefix(KeyPrefixT&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::forward<KeyPrefixT>(value); }
    template<typename KeyPrefixT = Aws::String>
    ProtectedQueryS3OutputConfiguration& WithKeyPrefix(KeyPrefixT&& value) { SetKeyPrefix(std::forward<KeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether files should be output as a single file (<code>TRUE</code>)
     * or output as multiple files (<code>FALSE</code>). This parameter is only
     * supported for analyses with the Spark analytics engine.</p>
     */
    inline bool GetSingleFileOutput() const { return m_singleFileOutput; }
    inline bool SingleFileOutputHasBeenSet() const { return m_singleFileOutputHasBeenSet; }
    inline void SetSingleFileOutput(bool value) { m_singleFileOutputHasBeenSet = true; m_singleFileOutput = value; }
    inline ProtectedQueryS3OutputConfiguration& WithSingleFileOutput(bool value) { SetSingleFileOutput(value); return *this;}
    ///@}
  private:

    ResultFormat m_resultFormat{ResultFormat::NOT_SET};
    bool m_resultFormatHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    bool m_singleFileOutput{false};
    bool m_singleFileOutputHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
