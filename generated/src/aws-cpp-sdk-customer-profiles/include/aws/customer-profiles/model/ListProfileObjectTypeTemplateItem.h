/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>A ProfileObjectTypeTemplate in a list of
   * ProfileObjectTypeTemplates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/ListProfileObjectTypeTemplateItem">AWS
   * API Reference</a></p>
   */
  class ListProfileObjectTypeTemplateItem
  {
  public:
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem() = default;
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API ListProfileObjectTypeTemplateItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the object template.</p>
     */
    inline const Aws::String& GetTemplateId() const { return m_templateId; }
    inline bool TemplateIdHasBeenSet() const { return m_templateIdHasBeenSet; }
    template<typename TemplateIdT = Aws::String>
    void SetTemplateId(TemplateIdT&& value) { m_templateIdHasBeenSet = true; m_templateId = std::forward<TemplateIdT>(value); }
    template<typename TemplateIdT = Aws::String>
    ListProfileObjectTypeTemplateItem& WithTemplateId(TemplateIdT&& value) { SetTemplateId(std::forward<TemplateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source of the object template.</p>
     */
    inline const Aws::String& GetSourceName() const { return m_sourceName; }
    inline bool SourceNameHasBeenSet() const { return m_sourceNameHasBeenSet; }
    template<typename SourceNameT = Aws::String>
    void SetSourceName(SourceNameT&& value) { m_sourceNameHasBeenSet = true; m_sourceName = std::forward<SourceNameT>(value); }
    template<typename SourceNameT = Aws::String>
    ListProfileObjectTypeTemplateItem& WithSourceName(SourceNameT&& value) { SetSourceName(std::forward<SourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the object template.</p>
     */
    inline const Aws::String& GetSourceObject() const { return m_sourceObject; }
    inline bool SourceObjectHasBeenSet() const { return m_sourceObjectHasBeenSet; }
    template<typename SourceObjectT = Aws::String>
    void SetSourceObject(SourceObjectT&& value) { m_sourceObjectHasBeenSet = true; m_sourceObject = std::forward<SourceObjectT>(value); }
    template<typename SourceObjectT = Aws::String>
    ListProfileObjectTypeTemplateItem& WithSourceObject(SourceObjectT&& value) { SetSourceObject(std::forward<SourceObjectT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateId;
    bool m_templateIdHasBeenSet = false;

    Aws::String m_sourceName;
    bool m_sourceNameHasBeenSet = false;

    Aws::String m_sourceObject;
    bool m_sourceObjectHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
