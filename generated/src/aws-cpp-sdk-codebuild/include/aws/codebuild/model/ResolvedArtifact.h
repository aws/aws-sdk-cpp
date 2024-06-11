﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/ArtifactsType.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Represents a resolved build artifact. A resolved artifact is an artifact that
   * is built and deployed to the destination, such as Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ResolvedArtifact">AWS
   * API Reference</a></p>
   */
  class ResolvedArtifact
  {
  public:
    AWS_CODEBUILD_API ResolvedArtifact();
    AWS_CODEBUILD_API ResolvedArtifact(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ResolvedArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the type of artifact.</p>
     */
    inline const ArtifactsType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ArtifactsType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ArtifactsType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ResolvedArtifact& WithType(const ArtifactsType& value) { SetType(value); return *this;}
    inline ResolvedArtifact& WithType(ArtifactsType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the artifact.</p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline ResolvedArtifact& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline ResolvedArtifact& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline ResolvedArtifact& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the artifact.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }
    inline ResolvedArtifact& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}
    inline ResolvedArtifact& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ResolvedArtifact& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}
    ///@}
  private:

    ArtifactsType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
