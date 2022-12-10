/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Tag.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/CopyOptionGroupMessage">AWS
   * API Reference</a></p>
   */
  class CopyOptionGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API CopyOptionGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyOptionGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceOptionGroupIdentifier() const{ return m_sourceOptionGroupIdentifier; }

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline bool SourceOptionGroupIdentifierHasBeenSet() const { return m_sourceOptionGroupIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline void SetSourceOptionGroupIdentifier(const Aws::String& value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier = value; }

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline void SetSourceOptionGroupIdentifier(Aws::String&& value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier = std::move(value); }

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline void SetSourceOptionGroupIdentifier(const char* value) { m_sourceOptionGroupIdentifierHasBeenSet = true; m_sourceOptionGroupIdentifier.assign(value); }

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(const Aws::String& value) { SetSourceOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(Aws::String&& value) { SetSourceOptionGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the source option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must specify a valid option group.</p> </li> </ul>
     */
    inline CopyOptionGroupRequest& WithSourceOptionGroupIdentifier(const char* value) { SetSourceOptionGroupIdentifier(value); return *this;}


    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline const Aws::String& GetTargetOptionGroupIdentifier() const{ return m_targetOptionGroupIdentifier; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline bool TargetOptionGroupIdentifierHasBeenSet() const { return m_targetOptionGroupIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(const Aws::String& value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier = value; }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(Aws::String&& value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier = std::move(value); }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline void SetTargetOptionGroupIdentifier(const char* value) { m_targetOptionGroupIdentifierHasBeenSet = true; m_targetOptionGroupIdentifier.assign(value); }

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(const Aws::String& value) { SetTargetOptionGroupIdentifier(value); return *this;}

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(Aws::String&& value) { SetTargetOptionGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the copied option group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Can't be null, empty, or blank</p> </li> <li> <p>Must contain from 1 to 255
     * letters, numbers, or hyphens</p> </li> <li> <p>First character must be a
     * letter</p> </li> <li> <p>Can't end with a hyphen or contain two consecutive
     * hyphens</p> </li> </ul> <p>Example: <code>my-option-group</code> </p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupIdentifier(const char* value) { SetTargetOptionGroupIdentifier(value); return *this;}


    /**
     * <p>The description for the copied option group.</p>
     */
    inline const Aws::String& GetTargetOptionGroupDescription() const{ return m_targetOptionGroupDescription; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline bool TargetOptionGroupDescriptionHasBeenSet() const { return m_targetOptionGroupDescriptionHasBeenSet; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(const Aws::String& value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription = value; }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(Aws::String&& value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription = std::move(value); }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline void SetTargetOptionGroupDescription(const char* value) { m_targetOptionGroupDescriptionHasBeenSet = true; m_targetOptionGroupDescription.assign(value); }

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(const Aws::String& value) { SetTargetOptionGroupDescription(value); return *this;}

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(Aws::String&& value) { SetTargetOptionGroupDescription(std::move(value)); return *this;}

    /**
     * <p>The description for the copied option group.</p>
     */
    inline CopyOptionGroupRequest& WithTargetOptionGroupDescription(const char* value) { SetTargetOptionGroupDescription(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    
    inline CopyOptionGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    
    inline CopyOptionGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    
    inline CopyOptionGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    
    inline CopyOptionGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_sourceOptionGroupIdentifier;
    bool m_sourceOptionGroupIdentifierHasBeenSet = false;

    Aws::String m_targetOptionGroupIdentifier;
    bool m_targetOptionGroupIdentifierHasBeenSet = false;

    Aws::String m_targetOptionGroupDescription;
    bool m_targetOptionGroupDescriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
