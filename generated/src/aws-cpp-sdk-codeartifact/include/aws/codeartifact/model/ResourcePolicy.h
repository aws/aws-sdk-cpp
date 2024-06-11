/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
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
namespace CodeArtifact
{
namespace Model
{

  /**
   * <p> An CodeArtifact resource policy that contains a resource ARN, document
   * details, and a revision. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeartifact-2018-09-22/ResourcePolicy">AWS
   * API Reference</a></p>
   */
  class ResourcePolicy
  {
  public:
    AWS_CODEARTIFACT_API ResourcePolicy();
    AWS_CODEARTIFACT_API ResourcePolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API ResourcePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the resource associated with the resource policy </p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }
    inline ResourcePolicy& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline ResourcePolicy& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline ResourcePolicy& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current revision of the resource policy. </p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline ResourcePolicy& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline ResourcePolicy& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline ResourcePolicy& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The resource policy formatted in JSON. </p>
     */
    inline const Aws::String& GetDocument() const{ return m_document; }
    inline bool DocumentHasBeenSet() const { return m_documentHasBeenSet; }
    inline void SetDocument(const Aws::String& value) { m_documentHasBeenSet = true; m_document = value; }
    inline void SetDocument(Aws::String&& value) { m_documentHasBeenSet = true; m_document = std::move(value); }
    inline void SetDocument(const char* value) { m_documentHasBeenSet = true; m_document.assign(value); }
    inline ResourcePolicy& WithDocument(const Aws::String& value) { SetDocument(value); return *this;}
    inline ResourcePolicy& WithDocument(Aws::String&& value) { SetDocument(std::move(value)); return *this;}
    inline ResourcePolicy& WithDocument(const char* value) { SetDocument(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::String m_document;
    bool m_documentHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
