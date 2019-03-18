/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mediaconvert/model/Id3Insertion.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Enable Timed metadata insertion (TimedMetadataInsertion) to include ID3 tags in
   * your job. To include timed metadata, you must enable it here, enable it in each
   * output container, and specify tags and timecodes in ID3 insertion (Id3Insertion)
   * objects.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimedMetadataInsertion">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONVERT_API TimedMetadataInsertion
  {
  public:
    TimedMetadataInsertion();
    TimedMetadataInsertion(Aws::Utils::Json::JsonView jsonValue);
    TimedMetadataInsertion& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline const Aws::Vector<Id3Insertion>& GetId3Insertions() const{ return m_id3Insertions; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline bool Id3InsertionsHasBeenSet() const { return m_id3InsertionsHasBeenSet; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline void SetId3Insertions(const Aws::Vector<Id3Insertion>& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions = value; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline void SetId3Insertions(Aws::Vector<Id3Insertion>&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions = std::move(value); }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& WithId3Insertions(const Aws::Vector<Id3Insertion>& value) { SetId3Insertions(value); return *this;}

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& WithId3Insertions(Aws::Vector<Id3Insertion>&& value) { SetId3Insertions(std::move(value)); return *this;}

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& AddId3Insertions(const Id3Insertion& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions.push_back(value); return *this; }

    /**
     * Id3Insertions contains the array of Id3Insertion instances.
     */
    inline TimedMetadataInsertion& AddId3Insertions(Id3Insertion&& value) { m_id3InsertionsHasBeenSet = true; m_id3Insertions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Id3Insertion> m_id3Insertions;
    bool m_id3InsertionsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
