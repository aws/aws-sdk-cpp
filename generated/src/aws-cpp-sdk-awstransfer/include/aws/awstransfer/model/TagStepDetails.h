/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/S3Tag.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Each step type has its own <code>StepDetails</code> structure.</p> <p>The
   * key/value pairs used to tag a file during the execution of a workflow
   * step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/TagStepDetails">AWS
   * API Reference</a></p>
   */
  class TagStepDetails
  {
  public:
    AWS_TRANSFER_API TagStepDetails() = default;
    AWS_TRANSFER_API TagStepDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API TagStepDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the step, used as an identifier.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    TagStepDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array that contains from 1 to 10 key/value pairs.</p>
     */
    inline const Aws::Vector<S3Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<S3Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<S3Tag>>
    TagStepDetails& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = S3Tag>
    TagStepDetails& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies which file to use as input to the workflow step: either the output
     * from the previous step, or the originally uploaded file for the workflow.</p>
     * <ul> <li> <p>To use the previous file as the input, enter
     * <code>${previous.file}</code>. In this case, this workflow step uses the output
     * file from the previous workflow step as input. This is the default value.</p>
     * </li> <li> <p>To use the originally uploaded file location as input for this
     * step, enter <code>${original.file}</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceFileLocation() const { return m_sourceFileLocation; }
    inline bool SourceFileLocationHasBeenSet() const { return m_sourceFileLocationHasBeenSet; }
    template<typename SourceFileLocationT = Aws::String>
    void SetSourceFileLocation(SourceFileLocationT&& value) { m_sourceFileLocationHasBeenSet = true; m_sourceFileLocation = std::forward<SourceFileLocationT>(value); }
    template<typename SourceFileLocationT = Aws::String>
    TagStepDetails& WithSourceFileLocation(SourceFileLocationT&& value) { SetSourceFileLocation(std::forward<SourceFileLocationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<S3Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_sourceFileLocation;
    bool m_sourceFileLocationHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
