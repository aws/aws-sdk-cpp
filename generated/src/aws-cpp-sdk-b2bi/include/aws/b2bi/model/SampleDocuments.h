/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/b2bi/B2BI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/b2bi/model/SampleDocumentKeys.h>
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
namespace B2BI
{
namespace Model
{

  /**
   * <p>Describes a structure that contains the Amazon S3 bucket and an array of the
   * corresponding keys used to identify the location for your sample
   * documents.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/b2bi-2022-06-23/SampleDocuments">AWS
   * API Reference</a></p>
   */
  class SampleDocuments
  {
  public:
    AWS_B2BI_API SampleDocuments() = default;
    AWS_B2BI_API SampleDocuments(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API SampleDocuments& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_B2BI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains the Amazon S3 bucket that is used to hold your sample documents.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    SampleDocuments& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains an array of the Amazon S3 keys used to identify the location for
     * your sample documents.</p>
     */
    inline const Aws::Vector<SampleDocumentKeys>& GetKeys() const { return m_keys; }
    inline bool KeysHasBeenSet() const { return m_keysHasBeenSet; }
    template<typename KeysT = Aws::Vector<SampleDocumentKeys>>
    void SetKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys = std::forward<KeysT>(value); }
    template<typename KeysT = Aws::Vector<SampleDocumentKeys>>
    SampleDocuments& WithKeys(KeysT&& value) { SetKeys(std::forward<KeysT>(value)); return *this;}
    template<typename KeysT = SampleDocumentKeys>
    SampleDocuments& AddKeys(KeysT&& value) { m_keysHasBeenSet = true; m_keys.emplace_back(std::forward<KeysT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::Vector<SampleDocumentKeys> m_keys;
    bool m_keysHasBeenSet = false;
  };

} // namespace Model
} // namespace B2BI
} // namespace Aws
