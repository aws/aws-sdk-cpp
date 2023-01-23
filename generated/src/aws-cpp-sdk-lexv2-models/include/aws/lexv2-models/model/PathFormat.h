/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object that contains a path format that will be applied when Amazon Lex
   * reads the transcript file in the bucket you provide. Specify this object if you
   * only want Lex to read a subset of files in your Amazon S3 bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/PathFormat">AWS
   * API Reference</a></p>
   */
  class PathFormat
  {
  public:
    AWS_LEXMODELSV2_API PathFormat();
    AWS_LEXMODELSV2_API PathFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API PathFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetObjectPrefixes() const{ return m_objectPrefixes; }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline bool ObjectPrefixesHasBeenSet() const { return m_objectPrefixesHasBeenSet; }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline void SetObjectPrefixes(const Aws::Vector<Aws::String>& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes = value; }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline void SetObjectPrefixes(Aws::Vector<Aws::String>&& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes = std::move(value); }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline PathFormat& WithObjectPrefixes(const Aws::Vector<Aws::String>& value) { SetObjectPrefixes(value); return *this;}

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline PathFormat& WithObjectPrefixes(Aws::Vector<Aws::String>&& value) { SetObjectPrefixes(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline PathFormat& AddObjectPrefixes(const Aws::String& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes.push_back(value); return *this; }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline PathFormat& AddObjectPrefixes(Aws::String&& value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of Amazon S3 prefixes that points to sub-folders in the Amazon S3
     * bucket. Specify this list if you only want Lex to read the files under this set
     * of sub-folders.</p>
     */
    inline PathFormat& AddObjectPrefixes(const char* value) { m_objectPrefixesHasBeenSet = true; m_objectPrefixes.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_objectPrefixes;
    bool m_objectPrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
