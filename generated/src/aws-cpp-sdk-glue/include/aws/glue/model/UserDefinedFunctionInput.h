/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FunctionType.h>
#include <aws/glue/model/GovernanceMode.h>
#include <aws/glue/model/PrincipalType.h>
#include <aws/glue/model/ResourceUri.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>A structure used to create or update a user-defined function.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/UserDefinedFunctionInput">AWS
 * API Reference</a></p>
 */
class UserDefinedFunctionInput {
 public:
  AWS_GLUE_API UserDefinedFunctionInput() = default;
  AWS_GLUE_API UserDefinedFunctionInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API UserDefinedFunctionInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the function.</p>
   */
  inline const Aws::String& GetFunctionName() const { return m_functionName; }
  inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
  template <typename FunctionNameT = Aws::String>
  void SetFunctionName(FunctionNameT&& value) {
    m_functionNameHasBeenSet = true;
    m_functionName = std::forward<FunctionNameT>(value);
  }
  template <typename FunctionNameT = Aws::String>
  UserDefinedFunctionInput& WithFunctionName(FunctionNameT&& value) {
    SetFunctionName(std::forward<FunctionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Java class that contains the function code.</p>
   */
  inline const Aws::String& GetClassName() const { return m_className; }
  inline bool ClassNameHasBeenSet() const { return m_classNameHasBeenSet; }
  template <typename ClassNameT = Aws::String>
  void SetClassName(ClassNameT&& value) {
    m_classNameHasBeenSet = true;
    m_className = std::forward<ClassNameT>(value);
  }
  template <typename ClassNameT = Aws::String>
  UserDefinedFunctionInput& WithClassName(ClassNameT&& value) {
    SetClassName(std::forward<ClassNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The owner of the function.</p>
   */
  inline const Aws::String& GetOwnerName() const { return m_ownerName; }
  inline bool OwnerNameHasBeenSet() const { return m_ownerNameHasBeenSet; }
  template <typename OwnerNameT = Aws::String>
  void SetOwnerName(OwnerNameT&& value) {
    m_ownerNameHasBeenSet = true;
    m_ownerName = std::forward<OwnerNameT>(value);
  }
  template <typename OwnerNameT = Aws::String>
  UserDefinedFunctionInput& WithOwnerName(OwnerNameT&& value) {
    SetOwnerName(std::forward<OwnerNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the function.</p>
   */
  inline FunctionType GetFunctionType() const { return m_functionType; }
  inline bool FunctionTypeHasBeenSet() const { return m_functionTypeHasBeenSet; }
  inline void SetFunctionType(FunctionType value) {
    m_functionTypeHasBeenSet = true;
    m_functionType = value;
  }
  inline UserDefinedFunctionInput& WithFunctionType(FunctionType value) {
    SetFunctionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The owner type.</p>
   */
  inline PrincipalType GetOwnerType() const { return m_ownerType; }
  inline bool OwnerTypeHasBeenSet() const { return m_ownerTypeHasBeenSet; }
  inline void SetOwnerType(PrincipalType value) {
    m_ownerTypeHasBeenSet = true;
    m_ownerType = value;
  }
  inline UserDefinedFunctionInput& WithOwnerType(PrincipalType value) {
    SetOwnerType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource URIs for the function.</p>
   */
  inline const Aws::Vector<ResourceUri>& GetResourceUris() const { return m_resourceUris; }
  inline bool ResourceUrisHasBeenSet() const { return m_resourceUrisHasBeenSet; }
  template <typename ResourceUrisT = Aws::Vector<ResourceUri>>
  void SetResourceUris(ResourceUrisT&& value) {
    m_resourceUrisHasBeenSet = true;
    m_resourceUris = std::forward<ResourceUrisT>(value);
  }
  template <typename ResourceUrisT = Aws::Vector<ResourceUri>>
  UserDefinedFunctionInput& WithResourceUris(ResourceUrisT&& value) {
    SetResourceUris(std::forward<ResourceUrisT>(value));
    return *this;
  }
  template <typename ResourceUrisT = ResourceUri>
  UserDefinedFunctionInput& AddResourceUris(ResourceUrisT&& value) {
    m_resourceUrisHasBeenSet = true;
    m_resourceUris.emplace_back(std::forward<ResourceUrisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location that contains the function's artifacts. Required when
   * <code>GovernanceMode</code> is <code>LAKE_FORMATION</code>. You must register
   * the location with Lake Formation, and every resource URI must be under this
   * location.</p>
   */
  inline const Aws::String& GetArtifactLocation() const { return m_artifactLocation; }
  inline bool ArtifactLocationHasBeenSet() const { return m_artifactLocationHasBeenSet; }
  template <typename ArtifactLocationT = Aws::String>
  void SetArtifactLocation(ArtifactLocationT&& value) {
    m_artifactLocationHasBeenSet = true;
    m_artifactLocation = std::forward<ArtifactLocationT>(value);
  }
  template <typename ArtifactLocationT = Aws::String>
  UserDefinedFunctionInput& WithArtifactLocation(ArtifactLocationT&& value) {
    SetArtifactLocation(std::forward<ArtifactLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>How access to the function is governed. Specify <code>LAKE_FORMATION</code>
   * to manage access to the function with Lake Formation permissions. If you don't
   * specify a value, the default is <code>IAM_ONLY</code>. You can't change the
   * governance mode after the function is created.</p> <p>When
   * <code>GovernanceMode</code> is <code>LAKE_FORMATION</code>:</p> <ul> <li> <p>You
   * must be a data lake administrator or have all permissions on the Data Catalog
   * with the grant option.</p> </li> <li> <p>You must have the
   * <code>DATA_LOCATION_ACCESS</code> permission on the
   * <code>ArtifactLocation</code>, unless you're a data lake administrator.</p>
   * </li> <li> <p>You must specify from 1 to 10 resource URIs, each under the
   * <code>ArtifactLocation</code>.</p> </li> <li> <p>You can't rename the
   * function.</p> </li> </ul>
   */
  inline GovernanceMode GetGovernanceMode() const { return m_governanceMode; }
  inline bool GovernanceModeHasBeenSet() const { return m_governanceModeHasBeenSet; }
  inline void SetGovernanceMode(GovernanceMode value) {
    m_governanceModeHasBeenSet = true;
    m_governanceMode = value;
  }
  inline UserDefinedFunctionInput& WithGovernanceMode(GovernanceMode value) {
    SetGovernanceMode(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_functionName;

  Aws::String m_className;

  Aws::String m_ownerName;

  FunctionType m_functionType{FunctionType::NOT_SET};

  PrincipalType m_ownerType{PrincipalType::NOT_SET};

  Aws::Vector<ResourceUri> m_resourceUris;

  Aws::String m_artifactLocation;

  GovernanceMode m_governanceMode{GovernanceMode::NOT_SET};
  bool m_functionNameHasBeenSet = false;
  bool m_classNameHasBeenSet = false;
  bool m_ownerNameHasBeenSet = false;
  bool m_functionTypeHasBeenSet = false;
  bool m_ownerTypeHasBeenSet = false;
  bool m_resourceUrisHasBeenSet = false;
  bool m_artifactLocationHasBeenSet = false;
  bool m_governanceModeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
