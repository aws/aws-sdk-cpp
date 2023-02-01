/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>

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
namespace ComprehendMedical
{
namespace Model
{

  /**
   * <p> The number of characters in the input text to be analyzed. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/Characters">AWS
   * API Reference</a></p>
   */
  class Characters
  {
  public:
    AWS_COMPREHENDMEDICAL_API Characters();
    AWS_COMPREHENDMEDICAL_API Characters(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Characters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHENDMEDICAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The number of characters present in the input text document as processed by
     * Comprehend Medical. </p>
     */
    inline int GetOriginalTextCharacters() const{ return m_originalTextCharacters; }

    /**
     * <p> The number of characters present in the input text document as processed by
     * Comprehend Medical. </p>
     */
    inline bool OriginalTextCharactersHasBeenSet() const { return m_originalTextCharactersHasBeenSet; }

    /**
     * <p> The number of characters present in the input text document as processed by
     * Comprehend Medical. </p>
     */
    inline void SetOriginalTextCharacters(int value) { m_originalTextCharactersHasBeenSet = true; m_originalTextCharacters = value; }

    /**
     * <p> The number of characters present in the input text document as processed by
     * Comprehend Medical. </p>
     */
    inline Characters& WithOriginalTextCharacters(int value) { SetOriginalTextCharacters(value); return *this;}

  private:

    int m_originalTextCharacters;
    bool m_originalTextCharactersHasBeenSet = false;
  };

} // namespace Model
} // namespace ComprehendMedical
} // namespace Aws
