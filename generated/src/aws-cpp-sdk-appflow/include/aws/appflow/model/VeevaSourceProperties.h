/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
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
namespace Appflow
{
namespace Model
{

  /**
   * <p> The properties that are applied when using Veeva as a flow source.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appflow-2020-08-23/VeevaSourceProperties">AWS
   * API Reference</a></p>
   */
  class VeevaSourceProperties
  {
  public:
    AWS_APPFLOW_API VeevaSourceProperties() = default;
    AWS_APPFLOW_API VeevaSourceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API VeevaSourceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFLOW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The object specified in the Veeva flow source. </p>
     */
    inline const Aws::String& GetObject() const { return m_object; }
    inline bool ObjectHasBeenSet() const { return m_objectHasBeenSet; }
    template<typename ObjectT = Aws::String>
    void SetObject(ObjectT&& value) { m_objectHasBeenSet = true; m_object = std::forward<ObjectT>(value); }
    template<typename ObjectT = Aws::String>
    VeevaSourceProperties& WithObject(ObjectT&& value) { SetObject(std::forward<ObjectT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document type specified in the Veeva document extract flow.</p>
     */
    inline const Aws::String& GetDocumentType() const { return m_documentType; }
    inline bool DocumentTypeHasBeenSet() const { return m_documentTypeHasBeenSet; }
    template<typename DocumentTypeT = Aws::String>
    void SetDocumentType(DocumentTypeT&& value) { m_documentTypeHasBeenSet = true; m_documentType = std::forward<DocumentTypeT>(value); }
    template<typename DocumentTypeT = Aws::String>
    VeevaSourceProperties& WithDocumentType(DocumentTypeT&& value) { SetDocumentType(std::forward<DocumentTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value to include source files in Veeva document extract flow.</p>
     */
    inline bool GetIncludeSourceFiles() const { return m_includeSourceFiles; }
    inline bool IncludeSourceFilesHasBeenSet() const { return m_includeSourceFilesHasBeenSet; }
    inline void SetIncludeSourceFiles(bool value) { m_includeSourceFilesHasBeenSet = true; m_includeSourceFiles = value; }
    inline VeevaSourceProperties& WithIncludeSourceFiles(bool value) { SetIncludeSourceFiles(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value to include file renditions in Veeva document extract flow.</p>
     */
    inline bool GetIncludeRenditions() const { return m_includeRenditions; }
    inline bool IncludeRenditionsHasBeenSet() const { return m_includeRenditionsHasBeenSet; }
    inline void SetIncludeRenditions(bool value) { m_includeRenditionsHasBeenSet = true; m_includeRenditions = value; }
    inline VeevaSourceProperties& WithIncludeRenditions(bool value) { SetIncludeRenditions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Boolean value to include All Versions of files in Veeva document extract
     * flow.</p>
     */
    inline bool GetIncludeAllVersions() const { return m_includeAllVersions; }
    inline bool IncludeAllVersionsHasBeenSet() const { return m_includeAllVersionsHasBeenSet; }
    inline void SetIncludeAllVersions(bool value) { m_includeAllVersionsHasBeenSet = true; m_includeAllVersions = value; }
    inline VeevaSourceProperties& WithIncludeAllVersions(bool value) { SetIncludeAllVersions(value); return *this;}
    ///@}
  private:

    Aws::String m_object;
    bool m_objectHasBeenSet = false;

    Aws::String m_documentType;
    bool m_documentTypeHasBeenSet = false;

    bool m_includeSourceFiles{false};
    bool m_includeSourceFilesHasBeenSet = false;

    bool m_includeRenditions{false};
    bool m_includeRenditionsHasBeenSet = false;

    bool m_includeAllVersions{false};
    bool m_includeAllVersionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
